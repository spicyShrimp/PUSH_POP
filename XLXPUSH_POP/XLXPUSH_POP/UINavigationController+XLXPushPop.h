//
//  UINavigationController+XLXPushPop.h
//  XLXAutoStreets
//
//  Created by charles on 2017/7/6.
//  Copyright © 2017年 charles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (XLXPushPop)

/**
 pop后再push(pushvc)(效果)
 (实际是先push(pushvc),完成后把当前vc移除)
 */
- (void)popThenPushViewController:(UIViewController *)pushvc animated:(BOOL)animated;

/**
 pop到(popvc)后再push(pushvc)(效果)
 (实际是先push(pushvc),完成后把(popvc)和(pushvc)之间的移除)
 */
-(void)popToViewController:(UIViewController *)popvc thenPushViewController:(UIViewController *)pushvc animated:(BOOL)animated;
/**
 pop到(最后一个popvcClass)后再push(pushvc)(效果)
 (实际是先push(pushvc),完成后把(最后一个popvcClass)和(pushvc)之间的移除)
 */
-(void)popToViewControllerClass:(Class)popvcClass thenPushViewController:(UIViewController *)pushvc animated:(BOOL)animated;
/**
 pop到rootvc后再push(pushvc)(效果)
 (实际是先push(pushvc),完成后把(rootvc)和(pushvc)之间的移除)
 */
- (void)popToRootThenPushViewController:(UIViewController *)pushvc animated:(BOOL)animated;


/**
 popToViewController:animated-->popToViewControllerClass:animated
 如果有多个viewControllerClass在栈中,pop到最后的那个(如果要指定到具体的某一个,则使用系统方法 popToViewController:animated)
 
 */
- (NSArray<__kindof UIViewController *> *)popToViewControllerClass:(Class)viewControllerClass animated:(BOOL)animated;  // Pops view controllers until the one specified is on top. Returns the popped controllers.
/**
 popToViewController:animated-->popToViewControllerClass:animated+完成
 如果有多个viewControllerClass在栈中,pop到最后的那个(如果要指定到具体的某一个,则使用系统方法 popToViewController:animated)
 
 */
- (NSArray<__kindof UIViewController *> *)popToViewControllerClass:(Class)viewControllerClass animated:(BOOL)animated completion: (void (^)(void))completion;

/**
 pushViewController:animated:+完成
 */
- (void)pushViewController:(UIViewController*)viewController animated:(BOOL)animated completion: (void (^)(void))completion;  // Uses a horizontal slide transition. Has no effect if the view controller is already in the stack.

/**
 popViewControllerAnimated:+完成
 */
- (UIViewController *)popViewControllerAnimated:(BOOL)animated completion: (void (^)(void))completion; // Returns the popped controller.


/**
 popToViewController:animated+完成
 */
- (NSArray<__kindof UIViewController *> *)popToViewController:(UIViewController *)viewController animated:(BOOL)animated  completion: (void (^)(void))completion; // Pops view controllers until the one specified is on top. Returns the popped controllers.

/**
 popToRootViewControllerAnimated:+完成
 */
- (NSArray<__kindof UIViewController *> *)popToRootViewControllerAnimated:(BOOL)animated completion: (void (^)(void))completion; // Pops until there's only a single view controller left on the stack. Returns the popped controllers.

@end
