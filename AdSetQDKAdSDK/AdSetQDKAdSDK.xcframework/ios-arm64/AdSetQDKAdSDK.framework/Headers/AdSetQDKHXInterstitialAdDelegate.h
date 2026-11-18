//
//  HXInterstitialAdDelegate.h
//  HuanxiaoAds
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.
//
//  插屏广告生命周期代理协议
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDKHXInterstitialAd;

/**
 * @protocol HXInterstitialAdDelegate
 * @brief 插屏广告生命周期代理协议
 *
 * @discussion
 * 通过实现此协议的方法，可以监听插屏广告的各个生命周期事件。
 * 所有代理方法均在主线程回调。
 */
@protocol AdSetQDKHXInterstitialAdDelegate <NSObject>

@optional

#pragma mark - 广告加载

/**
 * @brief 广告加载成功
 *
 * @param interstitialAd 插屏广告实例
 *
 * @discussion 广告素材加载完成，可以调用 showFromViewController: 展示广告
 */
- (void)interstitialAdDidLoad:(AdSetQDKHXInterstitialAd *)interstitialAd;

/**
 * @brief 广告加载失败
 *
 * @param interstitialAd 插屏广告实例
 * @param error 错误信息
 */
- (void)interstitialAd:(AdSetQDKHXInterstitialAd *)interstitialAd didFailWithError:(NSError *)error;

#pragma mark - 广告展示

/**
 * @brief 广告即将曝光
 *
 * @param interstitialAd 插屏广告实例
 *
 * @discussion 广告视图即将展示
 */
- (void)interstitialAdWillExpose:(AdSetQDKHXInterstitialAd *)interstitialAd;

/**
 * @brief 广告曝光成功
 *
 * @param interstitialAd 插屏广告实例
 *
 * @discussion 广告已成功展示，SDK 会自动上报曝光
 */
- (void)interstitialAdDidExpose:(AdSetQDKHXInterstitialAd *)interstitialAd;

/**
 * @brief 广告展示失败
 *
 * @param interstitialAd 插屏广告实例
 * @param error 错误信息
 */
- (void)interstitialAd:(AdSetQDKHXInterstitialAd *)interstitialAd didFailToShowWithError:(NSError *)error;

#pragma mark - 广告交互

/**
 * @brief 广告被点击
 *
 * @param interstitialAd 插屏广告实例
 *
 * @discussion 用户点击了广告，SDK 会自动处理跳转和上报
 */
- (void)interstitialAdDidClick:(AdSetQDKHXInterstitialAd *)interstitialAd;

/**
 * @brief 关闭按钮被点击
 *
 * @param interstitialAd 插屏广告实例
 */
- (void)interstitialAdDidClickClose:(AdSetQDKHXInterstitialAd *)interstitialAd;

#pragma mark - 应用内落地页

/// 应用内落地页打开（点击广告后，落地页 / 合规页面 / App Store 内部展示等应用内二级页面打开时回调）
- (void)interstitialAdDidOpenLandingPage:(AdSetQDKHXInterstitialAd *)interstitialAd;

/// 应用内落地页关闭（上述应用内二级页面关闭、返回广告时回调）
- (void)interstitialAdDidCloseLandingPage:(AdSetQDKHXInterstitialAd *)interstitialAd;

#pragma mark - 广告关闭

/**
 * @brief 广告即将关闭
 *
 * @param interstitialAd 插屏广告实例
 *
 * @discussion 广告视图即将从窗口移除
 */
- (void)interstitialAdWillClose:(AdSetQDKHXInterstitialAd *)interstitialAd;

/**
 * @brief 广告已关闭
 *
 * @param interstitialAd 插屏广告实例
 *
 * @discussion 广告视图已从窗口移除
 */
- (void)interstitialAdDidClose:(AdSetQDKHXInterstitialAd *)interstitialAd;

@end

NS_ASSUME_NONNULL_END

