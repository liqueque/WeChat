//
//  BaseViewController.h
//  WeChat
//
//  Created by qq on 16/6/4.
//  Copyright © 2016年 qq. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController

@property(nonatomic,strong)UITableView *tableView;

@property(nonatomic,strong)NSMutableArray *dataSource;

-(void)registerCellWithNib:(NSString *)nibName tableView:(UITableView *)tableView;

-(void)registerCellWithClass:(NSString *)className tableView:(UITableView *)tableView;

-(int)getRandomNumber:(int)from to:(int)to;

@end
