//
//  ExampleViewControllerImageView.h
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 14.01.14.
//  Copyright (c) 2014 Mario Hahn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHVideoImageGalleryGlobal.h"
#import "MHGalleryPresenterImageView.h"

@interface ExampleViewControllerImageView : UIViewController
@property(nonatomic,strong)IBOutlet MHGalleryPresenterImageView *iv;
@end
