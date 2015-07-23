//
//  DetailViewController.h
//  Pluralsight-Author-Info-App
//
//  Created by Matt Kruczek on 8/5/13.
//  Copyright (c) 2013 Pluralsight. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
