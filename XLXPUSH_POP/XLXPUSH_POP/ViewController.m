//
//  ViewController.m
//  XLXPUSH_POP
//
//  Created by charles on 2017/7/24.
//  Copyright © 2017年 charles. All rights reserved.
//

#import "ViewController.h"
#import "AViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.navigationItem.title = @"ROOT";
    self.view.backgroundColor = [UIColor whiteColor];
    
}

- (IBAction)pushAction {
    AViewController *vc = [AViewController new];
    [self.navigationController pushViewController:vc animated:YES];
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
