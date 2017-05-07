//
//  CommentCell.h
//  WeChat
//
//  Created by qq on 16/6/4.
//  Copyright © 2016年 qq. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommentModel;


@interface CommentCell : UITableViewCell


@property (nonatomic, strong) UILabel *contentLabel;

- (void)configCellWithModel:(CommentModel *)model;

@end

