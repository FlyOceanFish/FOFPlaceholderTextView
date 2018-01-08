//
//  FOFPlaceholderTextView.h
//
//  Created by FlyOceanFish on 2017/12/18.
//  Copyright © 2017年 FlyOceanFish. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FOFPlaceholderTextView;

NS_ASSUME_NONNULL_BEGIN

@protocol FOFPlaceholderTextViewDelegate

@optional
- (BOOL)placeholderTextView:(FOFPlaceholderTextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text;

-(void)placeholderTextViewDidChange:(FOFPlaceholderTextView *)textView;
-(void)placeholderTextViewDidOverMax:(FOFPlaceholderTextView *)textView;
@end

@interface FOFPlaceholderTextView : UITextView

@property (nonatomic,strong)IBInspectable NSString *placeholder;
@property (nonatomic,strong)IBInspectable UIColor *placeholderColor UI_APPEARANCE_SELECTOR;

/**
 是否显示计数文字，默认不显示
 */
@property (nonatomic,assign)IBInspectable BOOL showCountLabel;

/**
 最大可输入字数，默认不限制
 */
@property (nonatomic,assign)IBInspectable NSInteger maxWord;

/**
 固定不可编辑文字个数，初始文字的个数必须不小于此值
 */
@property (nonatomic,assign)IBInspectable NSInteger solidWord;

/**
 是否限制表情输入，默认false，不可输入
 */
@property (nonatomic,assign)IBInspectable BOOL restrictEmotion;

@property (nonatomic,weak) id<FOFPlaceholderTextViewDelegate> fofDelegate;
NS_ASSUME_NONNULL_END
@end
