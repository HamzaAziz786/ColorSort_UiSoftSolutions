﻿using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
// Placing the Purchaser class in the CompleteProject namespace allows it to interact with ScoreManager, 
// one of the existing Survival Shooter scripts.

// Deriving the Purchaser class from IStoreListener enables it to receive messages from Unity Purchasing.
public class Purchaser : MonoBehaviour, IStoreListener
{
    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.

    // Product identifiers for all products capable of being purchased: 
    // "convenience" general identifiers for use with Purchasing, and their store-specific identifier 
    // counterparts for use with and outside of Unity Purchasing. Define store-specific identifiers 
    // also on each platform's publisher dashboard (iTunes Connect, Google Play Developer Console, etc.)

    // General product identifiers for the consumable, non-consumable, and subscription products.
    // Use these handles in the code to reference which product to purchase. Also use these values 
    // when defining the Product Identifiers on the store. Except, for illustration purposes, the 
    // kProductIDSubscription - it has custom Apple and Google identifiers. We declare their store-
    // specific mapping to Unity Purchasing's AddProduct, below.
    public static bool Check = false;
    public static string Premium_Package = "premium_package";
    public static string Legendary_Bundle = "legendary_bundle";
    public static string Giant_Bundle = "giant_bundle";
    public static string Master_Bundle = "master_bundle";
    public static string Super_Bundle = "super_bundle";
    public static string Diamond_1 = "diamonds_50";
    public static string Diamond_2 = "diamonds_100";
    public static string Diamond_3 = "diamonds_150";
    public static string Diamond_4 = "diamonds_200";
    public static string Diamond_5 = "diamonds_250";


    public static Purchaser instance;
    // Apple App Store-specific product identifier for the subscription product.
    //private static string kProductNameAppleSubscription = "com.unity3d.subscription.new";

    // Google Play Store-specific product identifier subscription product.
    //private static string kProductNameGooglePlaySubscription = "com.unity3d.subscription.original";
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        DontDestroyOnLoad(this.gameObject);
    }
    void Start()
    {
        // If we haven't set up the Unity Purchasing reference
        if (m_StoreController == null)
        {
            // Begin to configure our connection to Purchasing
            InitializePurchasing();
        }
        PlayerPrefs.SetInt("b" + 0, 1);
        PlayerPrefs.SetInt("w" + 0, 1);
    }

    [Obsolete]
    public void InitializePurchasing()
    {
        // If we have already connected to Purchasing ...
        if (IsInitialized())
        {
            // ... we are done here.
            return;
        }

        // Create a builder, first passing in a suite of Unity provided stores.
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        builder.AddProduct(Premium_Package, ProductType.NonConsumable);
        builder.AddProduct(Legendary_Bundle, ProductType.NonConsumable);
        builder.AddProduct(Giant_Bundle, ProductType.NonConsumable);
        builder.AddProduct(Master_Bundle, ProductType.NonConsumable);
        builder.AddProduct(Super_Bundle, ProductType.NonConsumable);
        builder.AddProduct(Diamond_1, ProductType.Consumable);
        builder.AddProduct(Diamond_2, ProductType.Consumable);
        builder.AddProduct(Diamond_3, ProductType.Consumable);
        builder.AddProduct(Diamond_4, ProductType.Consumable);
        builder.AddProduct(Diamond_5, ProductType.Consumable);


        








        UnityPurchasing.Initialize(this, builder);
    }


    private bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }


    public void PremiumPackage()
    {
        BuyProductID(Premium_Package);
    }
    public void LegendaryPackage()
    {
        BuyProductID(Legendary_Bundle);
    }
    public void GiantPackage()
    {
        BuyProductID(Giant_Bundle);
    }
    public void MasterBundle()
    {
        BuyProductID(Master_Bundle);
    }
    public void SuperBundle()
    {
        BuyProductID(Super_Bundle);
    }
    public void Diamonds_1st()
    {
        BuyProductID(Diamond_1);
    }
    public void Diamonds_2nd()
    {
        BuyProductID(Diamond_2);
    }
    public void Diamonds_3rd()
    {
        BuyProductID(Diamond_3);
    }
    public void Diamonds_4th()
    {
        BuyProductID(Diamond_4);
    }
    public void Diamonds_5th()
    {
        BuyProductID(Diamond_5);
    }
    void BuyProductID(string productId)
    {
        // If Purchasing has been initialized ...
        if (IsInitialized())
        {
            // ... look up the Product reference with the general product identifier and the Purchasing 
            // system's products collection.
            Product product = m_StoreController.products.WithID(productId);

            // If the look up found a product for this device's store and that product is ready to be sold ... 
            if (product != null && product.availableToPurchase)
            {
                Debug.Log(string.Format("Purchasing product asychronously: '{0}'", product.definition.id));
                // ... buy the product. Expect a response either through ProcessPurchase or OnPurchaseFailed 
                // asynchronously.
                m_StoreController.InitiatePurchase(product);
            }
            // Otherwise ...
            else
            {
                // ... report the product look-up failure situation  
                Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
            }
        }
        // Otherwise ...
        else
        {
            // ... report the fact Purchasing has not succeeded initializing yet. Consider waiting longer or 
            // retrying initiailization.
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }


    // Restore purchases previously made by this customer. Some platforms automatically restore purchases, like Google. 
    // Apple currently requires explicit purchase restoration for IAP, conditionally displaying a password prompt.
    public void RestorePurchases()
    {
        // If Purchasing has not yet been set up ...
        if (!IsInitialized())
        {
            // ... report the situation and stop restoring. Consider either waiting longer, or retrying initialization.
            Debug.Log("RestorePurchases FAIL. Not initialized.");
            return;
        }

        // If we are running on an Apple device ... 
        //if (Application.platform == RuntimePlatform.IPhonePlayer ||
        //    Application.platform == RuntimePlatform.OSXPlayer)
        //{
        //    // ... begin restoring purchases
        //    Debug.Log("RestorePurchases started ...");

        //    // Fetch the Apple store-specific subsystem.
        //    var apple = m_StoreExtensionProvider.GetExtension<IAppleExtensions>();
        //    // Begin the asynchronous process of restoring purchases. Expect a confirmation response in 
        //    // the Action<bool> below, and ProcessPurchase if there are previously purchased products to restore.
        //    apple.RestoreTransactions((result) => {
        //        // The first phase of restoration. If no more responses are received on ProcessPurchase then 
        //        // no purchases are available to be restored.
        //        Debug.Log("RestorePurchases continuing: " + result + ". If no further messages, no purchases available to restore.");
        //    });
        //}
        // Otherwise ...
        else
        {
            // We are not running on an Apple device. No work is necessary to restore purchases.
            Debug.Log("RestorePurchases FAIL. Not supported on this platform. Current = " + Application.platform);
        }
    }


    //  
    // --- IStoreListener
    //

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");

        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        // A consumable product has been purchased by this user.

        if (String.Equals(args.purchasedProduct.definition.id, Premium_Package, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            PlayerPrefs.SetInt("AllWallPapers", 9);
            PlayerPrefs.SetInt("AllTubes", 9);
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 4);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 2);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 5);

        }
        else if (String.Equals(args.purchasedProduct.definition.id, Legendary_Bundle, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
           // PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 625);
            //PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 100);
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 4);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 2);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 5);
            PlayerPrefs.SetInt("AllTubesStyles", 1);
            PlayerPrefs.SetInt("AllWallPapersStyles", 1);

        }
        else if (String.Equals(args.purchasedProduct.definition.id, Giant_Bundle, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 1000);
            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 100);
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 2);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 5);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 10);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Master_Bundle, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 500);
            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 150);
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 3);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 7);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 4);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Super_Bundle, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 200);
            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 400);
            PlayerPrefs.SetInt("Undo", PlayerPrefs.GetInt("Undo") + 7);
            PlayerPrefs.SetInt("Tube", PlayerPrefs.GetInt("Tube") + 10);
            PlayerPrefs.SetInt("Hints", PlayerPrefs.GetInt("Hints") + 3);
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Diamond_1, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
           
            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 50);
          
        }
        else if (String.Equals(args.purchasedProduct.definition.id, Diamond_2, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));

            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 100);

        }
        else if (String.Equals(args.purchasedProduct.definition.id, Diamond_3, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));

            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 150);

        }
        else if (String.Equals(args.purchasedProduct.definition.id, Diamond_4, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));

            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 200);

        }
        else if (String.Equals(args.purchasedProduct.definition.id, Diamond_5, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));

            PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + 250);

        }
        else
        {
            Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        }

        // Return a flag indicating whether this product has completely been received, or if the application needs 
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still 
        // saving purchased products to the cloud, and when that save is delayed. 
        return PurchaseProcessingResult.Complete;
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing 
        // this reason with the user to guide their troubleshooting actions.
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }

    public void OnInitializeFailed(InitializationFailureReason error, string message)
    {
        throw new NotImplementedException();
    }
}




