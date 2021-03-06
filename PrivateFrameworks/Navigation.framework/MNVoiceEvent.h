/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNVoiceEvent : NSObject {
    id /* block */  _completion;
    unsigned int  _options;
    unsigned int  _shortPromptType;
    NSString * _textToSpeak;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, readonly) unsigned int shortPromptType;
@property (nonatomic, readonly, copy) NSString *textToSpeak;

+ (id)eventWithPrompt:(unsigned int)arg1 options:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (id)eventWithText:(id)arg1 fallbackPrompt:(unsigned int)arg2 options:(unsigned int)arg3 completion:(id /* block */)arg4;
+ (BOOL)isValidShortPromptType:(unsigned int)arg1;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)initWithPrompt:(unsigned int)arg1 options:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)initWithText:(id)arg1 fallbackPrompt:(unsigned int)arg2 options:(unsigned int)arg3 completion:(id /* block */)arg4;
- (BOOL)isEqualToEvent:(id)arg1;
- (unsigned int)options;
- (unsigned int)shortPromptType;
- (id)textToSpeak;

@end
