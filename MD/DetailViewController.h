//
//  DetailViewController.h
//  MD
//
//  Created by 渡辺勝一 on H27/12/25.
//  Copyright © 平成27年 WatanabeKatuiti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

