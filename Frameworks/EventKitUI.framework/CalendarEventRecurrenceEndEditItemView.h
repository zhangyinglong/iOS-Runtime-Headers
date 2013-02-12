/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIDatePicker, UITableView;

@interface CalendarEventRecurrenceEndEditItemView : CalendarEventEditItemView <UITableViewDelegate, UITableViewDataSource> {
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    unsigned int _updatingPicker : 1;
    UIDatePicker *_datePicker;
    } _preNeverEndDate;
    } _repeatEndGr;
    UITableView *_table;
}

- (void)_localeChanged;
- (void)_neverClicked:(id)arg1;
- (BOOL)_showsNeverButton;
- (id)_stringForEndDate;
- (void)absorbValueFromSerializedValue:(id)arg1;
- (void)completeCancelled;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isValidGivenItemState;
- (id)navigationTitle;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })repeatEndDate;
- (void)setMinimumEndDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setRepeatEndDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end