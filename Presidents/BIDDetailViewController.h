//
//  BIDDetailViewController.h
//  Presidents
//
//  Created by 宋 治锋 on 13-3-11.
//  Copyright (c) 2013年 宋 治锋. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
