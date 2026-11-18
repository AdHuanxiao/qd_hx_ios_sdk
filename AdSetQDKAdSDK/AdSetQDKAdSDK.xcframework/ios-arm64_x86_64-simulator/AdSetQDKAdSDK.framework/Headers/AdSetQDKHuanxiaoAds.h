//
//  HuanxiaoAds.h
//  HuanxiaoAds SDK
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.


#import <Foundation/Foundation.h>

//! SDK 版本号 (数值)
FOUNDATION_EXPORT double AdSetQDKHuanxiaoAdsVersionNumber;

//! SDK 版本号 (字符串)
FOUNDATION_EXPORT const unsigned char AdSetQDKHuanxiaoAdsVersionString[];

#pragma mark - 核心模块

/// SDK 常量定义（错误码、状态码、日志级别）
#import <AdSetQDKAdSDK/AdSetQDKHXAdsDefines.h>

/// 隐私配置类
#import <AdSetQDKAdSDK/AdSetQDKHXPrivacyConfig.h>

/// SDK 配置类
#import <AdSetQDKAdSDK/AdSetQDKHXAdsConfig.h>

/// SDK 主类
#import <AdSetQDKAdSDK/AdSetQDKHXAdsSDK.h>

#pragma mark - 广告模块

#import <AdSetQDKAdSDK/AdSetQDKHXAdMaterialInfo.h>

// 竞价结果通知协议
#import <AdSetQDKAdSDK/AdSetQDKHXBidNotifiable.h>

#import <AdSetQDKAdSDK/AdSetQDKHXFullscreenAdRenderData.h>

// 开屏广告
#import <AdSetQDKAdSDK/AdSetQDKHXSplashAdDelegate.h>
#import <AdSetQDKAdSDK/AdSetQDKHXSplashAd.h>

// 插屏广告
#import <AdSetQDKAdSDK/AdSetQDKHXInterstitialAdDelegate.h>
#import <AdSetQDKAdSDK/AdSetQDKHXInterstitialAd.h>

// 信息流广告
#import <AdSetQDKAdSDK/AdSetQDKHXNativeAdDelegate.h>
#import <AdSetQDKAdSDK/AdSetQDKHXNativeAd.h>
#import <AdSetQDKAdSDK/AdSetQDKHXNativeAdRenderData.h>
#import <AdSetQDKAdSDK/AdSetQDKHXInteractionContainerView.h>
#import <AdSetQDKAdSDK/AdSetQDKHXMediaView.h>
// 激励视频广告
#import <AdSetQDKAdSDK/AdSetQDKHXRewardVideoAdDelegate.h>
#import <AdSetQDKAdSDK/AdSetQDKHXRewardVideoAd.h>

