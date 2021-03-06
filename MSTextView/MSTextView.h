//
//  WBTextView.h
//  MSTextView
//
//  Created by Mark Sands on 12/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MSTextViewDelegate
- (void)handleURL:(NSURL*)url;
@end


@interface MSTextView : UIView <UIWebViewDelegate> {
  id delegate;
  NSString *_text;
  UIFont *_font;
  
  UIWebView *_aWebView;
}

@property (nonatomic, assign) id delegate;
@property (retain) UIFont *font;
@property (retain) NSString *text;

@property (retain) UIWebView *_aWebView;
@end