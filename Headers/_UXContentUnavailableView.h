//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSButton, NSMutableArray, NSProgressIndicator, NSString, NSTextField;

@interface _UXContentUnavailableView : UXView
{
    BOOL _showProgress;
    NSString *_title;
    NSString *_message;
    NSString *_buttonTitle;
    NSButton *_actionButton;
    CDUnknownBlockType _buttonAction;
    NSProgressIndicator *_progressIndicator;
    unsigned long long _progressIndicatorStyle;
    unsigned long long _vibrantOptions;
    UXView *_containerView;
    NSTextField *_titleLabel;
    NSTextField *_messageLabel;
    NSMutableArray *_containerViewContraints;
}

@property(retain, nonatomic) NSMutableArray *containerViewContraints; // @synthesize containerViewContraints=_containerViewContraints;
@property(retain, nonatomic) NSTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UXView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long vibrantOptions; // @synthesize vibrantOptions=_vibrantOptions;
@property(nonatomic) unsigned long long progressIndicatorStyle; // @synthesize progressIndicatorStyle=_progressIndicatorStyle;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) BOOL showProgress; // @synthesize showProgress=_showProgress;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layout;
- (void)_updateProgressLayout;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateTextField:(id)arg1 withAttributedText:(id)arg2;
- (id)_textFieldWithFontSize:(double)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (id)placeholderMessageTextAttributes;
- (id)placeholderTitleTextAttributes;
- (id)_buttonTitleAttributes;
- (double)_buttonAlpha;
- (double)_labelAlpha;
- (id)_tintColor;
- (id)_textColor;
- (id)_flatTextColor;
- (id)_vibrantBaseColor;
- (BOOL)_hasVibrantButton;
- (BOOL)_hasVibrantText;

@end

