//
//  HXMediaView.h
//  HuanxiaoAds
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.
//
//  自渲染视频广告播放视图
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AdSetQDKHXVideoShowModel) {
    AdSetQDKHXVideoShowModelResize,         // 拉伸填充
    AdSetQDKHXVideoShowModelResizeAspect,   // 保持比例（可能有黑边）
    AdSetQDKHXVideoShowModelResizeFill,     // 保持比例填充（可能裁切）
};

@protocol AdSetQDKHXMediaViewDelegate;

@interface AdSetQDKHXMediaView : UIView

//  视频的显示模式，默认 HXVideoShowModelResizeAspect
@property (nonatomic, assign) AdSetQDKHXVideoShowModel showModel;
//  声音控制视图，外部可以改变 frame。width / height = 1:1
@property (nonatomic, strong, readonly) UIView *voiceControlView;
//  控制视频的音量控制按钮是否展示（默认不展示）
@property (nonatomic, assign) BOOL isHiddenVoiceButton;
//  是否正在播放
@property (nonatomic, assign, readonly) BOOL isPlaying;
//  是否静音了
@property (nonatomic, assign, readonly) BOOL isMuted;
//  代理
@property (nonatomic, weak, nullable) id<AdSetQDKHXMediaViewDelegate> delegate;

//  恢复播放
- (void)resume;
//  暂停播放
- (void)pause;
//  设置播放器的背景色
- (void)setPlayerBackgroundColor:(UIColor *)backgroundColor;
//  设置静音
- (void)voiceMute:(BOOL)mute;
//  销毁
- (void)destroyMediaView;

@end

@protocol AdSetQDKHXMediaViewDelegate <NSObject>

@optional

//  准备播放
- (void)hxMediaReady:(AdSetQDKHXMediaView *)mediaView;
//  开始播放
- (void)hxMediaStart:(AdSetQDKHXMediaView *)mediaView;
//  暂停播放
- (void)hxMediaPause:(AdSetQDKHXMediaView *)mediaView;
//  恢复播放
- (void)hxMediaResume:(AdSetQDKHXMediaView *)mediaView;
//  播放错误
- (void)hxMediaError:(AdSetQDKHXMediaView *)mediaView error:(NSError *)error;
//  播放完成
- (void)hxMediaCompleted:(AdSetQDKHXMediaView *)mediaView;

@end

NS_ASSUME_NONNULL_END
