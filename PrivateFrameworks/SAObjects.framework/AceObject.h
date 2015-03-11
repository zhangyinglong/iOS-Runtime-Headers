/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSMutableDictionary, NSNumber, NSString;

@interface AceObject : NSObject <AceObject> {
    NSString *_aceId;
    NSNumber *_deserializationDuration;
    NSMutableDictionary *_dict;
    NSData *_plistData;
    NSString *_refId;
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSMutableDictionary * dict;
@property(readonly) unsigned long long hash;
@property(readonly) NSData * plistData;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)_filteredDictionaryForKeySet:(struct __CFSet { }*)arg1 plistData:(id)arg2;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithPlistData:(id)arg1;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (bool)supportsSecureCoding;

- (bool)_afui_isUsefulUserResultCommand;
- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(long long)arg3 withPrefixes:(id)arg4;
- (void)_deserializeFromPlistData;
- (id)_dict;
- (id)_initWithMutableDictionary:(id)arg1;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3;
- (id)_serializedData;
- (id)aceId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deserializationDuration;
- (id)dict;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedClassName;
- (id)forceEagerDeserialization;
- (id)groupIdentifier;
- (bool)hasArrayForPropertyForKey:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)plistData;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKeyWithoutDeserializing:(id)arg1;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setRefId:(id)arg1;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (id)topLevelPropertyForKey:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end