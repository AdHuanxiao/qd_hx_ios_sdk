//
//  HXBidNotifiable.h
//  HuanxiaoAds
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.
//
//  竞价结果通知协议
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 竞价失败原因

/**
 * @enum HXBidLossReason
 * @brief 竞价失败原因码
 *
 * @constant HXBidLossReasonPriceFilter       1001 底价过滤
 * @constant HXBidLossReasonLowBid            1002 bid 价格低于最高价
 * @constant HXBidLossReasonBlacklistFilter   1003 素材黑名单过滤
 * @constant HXBidLossReasonCompeteFilter     1004 竞品过滤
 * @constant HXBidLossReasonTimeout           1005 超时过滤
 * @constant HXBidLossReasonOther             1006 其它
 */
typedef NS_ENUM(NSInteger, AdSetQDKHXBidLossReason) {
    AdSetQDKHXBidLossReasonPriceFilter     = 1001,
    AdSetQDKHXBidLossReasonLowBid          = 1002,
    AdSetQDKHXBidLossReasonBlacklistFilter = 1003,
    AdSetQDKHXBidLossReasonCompeteFilter   = 1004,
    AdSetQDKHXBidLossReasonTimeout         = 1005,
    AdSetQDKHXBidLossReasonOther           = 1006,
};

#pragma mark - 竞价胜出者

/**
 * @brief 竞价胜出者标识
 *
 * CSJ      穿山甲/头条
 * GDT      优量汇/广点通
 * KUAISHOU 快手
 * BAIDU    百青藤/百度
 * SIGMOB   Sigmob
 * OPPO     OPPO
 * VIVO     vivo
 * HUAWEI   华为
 * XIAOMI   小米
 * TAKU     Taku
 * JD       京东
 * OTHER    其他
 */
extern NSString *const AdSetQDKkHXWinBidderCSJ;
extern NSString *const AdSetQDKkHXWinBidderGDT;
extern NSString *const AdSetQDKkHXWinBidderKUAISHOU;
extern NSString *const AdSetQDKkHXWinBidderBAIDU;
extern NSString *const AdSetQDKkHXWinBidderSIGMOB;
extern NSString *const AdSetQDKkHXWinBidderOPPO;
extern NSString *const AdSetQDKkHXWinBidderVIVO;
extern NSString *const AdSetQDKkHXWinBidderHUAWEI;
extern NSString *const AdSetQDKkHXWinBidderXIAOMI;
extern NSString *const AdSetQDKkHXWinBidderTAKU;
extern NSString *const AdSetQDKkHXWinBidderJD;
extern NSString *const AdSetQDKkHXWinBidderOTHER;

#pragma mark - 竞价结果通知协议

/**
 * @protocol HXBidNotifiable
 * @brief 竞价结果通知协议
 *
 * @discussion
 * 聚合平台会回调竞价结果（胜出/失败）。
 * 媒体应调用此协议方法通知 SDK。
 *
 * 支持的广告类型：开屏、信息流、插屏、激励视频。
 */
@protocol AdSetQDKHXBidNotifiable <NSObject>

/**
 * @brief 通知 SDK 竞价胜出
 *
 * @param price       结算价格（分/CPM）
 * @param secondPrice 二次出价（分/CPM），无则传 0
 */
- (void)sendWinNotificationWithPrice:(NSUInteger)price
                         secondPrice:(NSUInteger)secondPrice;

/**
 * @brief 通知 SDK 竞价失败
 *
 * @param lossReason   失败原因码，参见 @c HXBidLossReason
 * @param winnerBidder 胜出方标识，参见 @c kHXWinBidder* 常量，未知可传 nil
 * @param winnerPrice  胜出方出价（分/CPM），未知传 0
 */
- (void)sendLossNotificationWithLossReason:(AdSetQDKHXBidLossReason)lossReason
                               winnerBidder:(nullable NSString *)winnerBidder
                               winnerPrice:(NSUInteger)winnerPrice;

@end

NS_ASSUME_NONNULL_END
