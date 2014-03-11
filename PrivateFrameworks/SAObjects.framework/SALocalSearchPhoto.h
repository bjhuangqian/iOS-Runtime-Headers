/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * fullsize;
@property(copy) NSString * identifier;
@property(retain) SAUIAppPunchOut * photoPunchOut;
@property(copy) NSURL * thumbnail;

+ (id)photo;
+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fullsize;
- (id)groupIdentifier;
- (id)identifier;
- (id)photoPunchOut;
- (void)setFullsize:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhotoPunchOut:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end