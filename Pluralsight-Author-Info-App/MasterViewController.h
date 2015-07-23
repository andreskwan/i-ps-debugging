//
//  MasterViewController.h
//  Pluralsight-Author-Info-App
//
//  Created by Matt Kruczek on 8/5/13.
//  Copyright (c) 2013 Pluralsight. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    NSString* watchValue;
}

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
