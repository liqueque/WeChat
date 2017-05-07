



#import "FriendModel.h"

@implementation FriendModel
-(instancetype)initWithDic:(NSDictionary *)dic{
    self = [super init];
    if (self) {
        self.userId      = dic[@"userId"];
        self.userName    = dic[@"userName"];
        self.photo       = dic[@"photo"];
        self.phoneNO     = dic[@"phoneNO"];

    }
    return self;
}
@end
