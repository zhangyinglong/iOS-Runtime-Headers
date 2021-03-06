/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf * _descriptor;
}

@property (nonatomic, retain) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) BOOL hasDescriptor;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)dictionaryRepresentation;
- (BOOL)hasDescriptor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)writeTo:(id)arg1;

@end
