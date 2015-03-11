/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand {
}

@property(copy) NSString * errorCode;

+ (id)sessionValidationFailed;
+ (id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)errorCode;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setErrorCode:(id)arg1;

@end