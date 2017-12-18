//
//  YTOPlaceholderTextFiled.h
//  YtoStation
//
//  Created by YTO on 2017/12/18.
//  Copyright © 2017年 yto. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FOFPlaceholderTextView : UITextView

@property (nonatomic,strong)IBInspectable NSString *placeholder;
@property (nonatomic,strong)IBInspectable UIColor *placeholderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic,assign)IBInspectable BOOL showCountLabel;
@property (nonatomic,assign)IBInspectable NSInteger maxWord;
@property (nonatomic,assign)IBInspectable NSInteger solidWord;
@property (nonatomic,assign)IBInspectable BOOL restrictEmotion;
NS_ASSUME_NONNULL_END
@end
