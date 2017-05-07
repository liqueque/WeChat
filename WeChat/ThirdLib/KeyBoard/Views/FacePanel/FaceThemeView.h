//
//  FaceView.h
//  FaceKeyboard

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by qq on 16/3/30.
//  Copyright © 2016年 qq. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceThemeModel;

/**
 *  负责管理主题
 */

@interface FaceThemeView : UIView

- (void)loadFaceTheme:(FaceThemeModel *)faceTheme;

@end
