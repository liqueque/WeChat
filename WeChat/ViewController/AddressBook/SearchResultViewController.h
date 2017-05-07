

#import <UIKit/UIKit.h>

@protocol SearchResultSelectedDelegate <NSObject>

-(void)selectPersonWithUserId:(NSString *)userId userName:(NSString *)userName photo:(NSString *)photo phoneNO:(NSString *)phoneNO;


@end

@interface SearchResultViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchResultsUpdating>

-(void)updateAddressBookData:(NSArray *)AddressBookDataArray;//得到数据
@property(nonatomic,weak)id<SearchResultSelectedDelegate>delegate;


@end
