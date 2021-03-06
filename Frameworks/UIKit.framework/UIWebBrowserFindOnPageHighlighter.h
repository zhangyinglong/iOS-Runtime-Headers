/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {
    UIWebBrowserView * _browserView;
    <UIWebFindOnPageHighlighterDelegate> * _delegate;
    NSMutableArray * _highlightBubbleViews;
    UIView * _highlightHostView;
    unsigned int  _highlightedMatchIndex;
    unsigned int  _numberOfMatches;
    UIWebPDFViewHandler * _pdfHandler;
    NSArray * _pdfHighlightViews;
    NSString * _searchText;
    BOOL  _zoomToHighlightSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIWebFindOnPageHighlighterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int highlightedMatchIndex;
@property (nonatomic, readonly) unsigned int numberOfMatches;
@property (nonatomic, readonly, copy) NSString *searchText;
@property (readonly) Class superclass;

+ (BOOL)expandedRectsWouldIntersect:(id)arg1;

- (void)_addContentViewAtIndex:(unsigned int)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_clearHighlightViews;
- (void)_commonInitialize;
- (id)_currentPDFSearchResult;
- (void)_highlightFindOnPageMatch:(BOOL)arg1;
- (void)_highlightFindOnPageMatchForPDF:(BOOL)arg1 withPDFHandler:(id)arg2;
- (BOOL)_highlightSelection;
- (void)_setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentImage:(struct CGImage { }*)arg3 contentViews:(id)arg4 wobble:(BOOL)arg5;
- (BOOL)_updateHighlightedMatchIndex:(BOOL)arg1;
- (void)clearBrowserView;
- (void)dealloc;
- (id)delegate;
- (unsigned int)findOnPageOptions;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
- (unsigned int)highlightedMatchIndex;
- (id)initWithBrowserView:(id)arg1;
- (id)initWithPDFViewHandler:(id)arg1;
- (unsigned int)numberOfMatches;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchDidBegin:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (id)searchText;
- (void)searchWasCancelled:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned int)arg2;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentImage:(struct CGImage { }*)arg3 wobble:(BOOL)arg4;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4;
- (BOOL)updateHighlightBubbleWobble:(BOOL)arg1;

@end
