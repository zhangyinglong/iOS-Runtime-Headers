/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface CPTracing : NSObject {
     /* Encoded args for previous method: v16@0:4^l8B12 */
    NSString *mFilename;
}

- (void)dealloc;
- (id)initWithFilename:(id)arg1;
- (void)updateOpstat:(long*)arg1 isStarting:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
- (void)writeHeader;
- (void)writeOpstat:(long*)arg1 tracePoint:(long)arg2 filter:(NSInteger)arg3;

@end