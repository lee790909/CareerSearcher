//
//  SearchViewController.h
//  CareerSearcher
//
//  Created by MD631 on 13/8/18.
//  Copyright (c) 2013年 MD631. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SearchViewDelegate <NSObject>

-(void)searchViewDismissed:(NSString*)str;

@end

@interface SearchViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
- (IBAction)onFinishedButtonPressed:(id)sender;

@end
