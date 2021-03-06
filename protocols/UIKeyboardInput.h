/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardInput <NSObject>

@optional

- (BOOL)keyboardInput:(id <UIKeyboardInput>)arg1 shouldInsertText:(NSString *)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id <UIKeyboardInput>)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(NSString *)arg3;
- (BOOL)keyboardInputChanged:(id <UIKeyboardInput>)arg1;
- (void)keyboardInputChangedSelection:(id <UIKeyboardInput>)arg1;
- (BOOL)keyboardInputShouldDelete:(id <UIKeyboardInput>)arg1;

@end
