//
//  iPhone OAuth Starter Kit
//
//  Supported providers: LinkedIn (OAuth 1.0a)
//
//  Lee Whitney
//  http://whitneyland.com
//

#import <UIKit/UIKit.h>
#import "OAuthLoginView.h"
#import "JSONKit.h"
#import "OAConsumer.h"
#import "OAMutableURLRequest.h"
#import "OADataFetcher.h"
#import "OATokenManager.h"

@interface ProfileTabView : UIViewController 
{
    
    IBOutlet UILabel *emailAddress;
    IBOutlet UILabel *age;
}

@property (nonatomic, retain) IBOutlet UIButton *button;
@property (nonatomic, retain) IBOutlet UILabel *name;
@property (nonatomic, retain) IBOutlet UILabel *headline;
@property (nonatomic, retain) OAuthLoginView *oAuthLoginView;
@property (nonatomic, retain) IBOutlet UILabel * emailAddress;
@property (nonatomic, retain) IBOutlet UILabel * age;

- (IBAction)button_TouchUp:(UIButton *)sender;
- (void)profileApiCall;


@end
