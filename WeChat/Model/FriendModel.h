

#import <Foundation/Foundation.h>

@interface FriendModel : NSObject
@property(nonatomic,copy)NSString *photo;

@property(nonatomic,copy)NSString *userName;

@property(nonatomic,copy)NSString *userId;

@property(nonatomic,copy)NSString *phoneNO;
-(instancetype)initWithDic:(NSDictionary *)dic;
@end
