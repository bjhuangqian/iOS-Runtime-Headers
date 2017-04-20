/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSubstitution : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _active;
    BOOL  _appliesToAllApps;
    NSSet * _bundleIdentifiers;
    BOOL  _ignoreCase;
    BOOL  _isReplacementTextAllPunctuation;
    BOOL  _isReplacementTextSurroundedByPunctuation;
    BOOL  _isUserSubstitution;
    NSSet * _languages;
    NSString * _originalString;
    NSString * _phonemes;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _replacementRange;
    NSString * _replacementString;
    NSUUID * _uuid;
    NSSet * _voiceIds;
}

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL appliesToAllApps;
@property (nonatomic, copy) NSSet *bundleIdentifiers;
@property (nonatomic) BOOL ignoreCase;
@property (nonatomic, readonly) BOOL isReplacementTextAllPunctuation;
@property (nonatomic, readonly) BOOL isReplacementTextSurroundedByPunctuation;
@property (nonatomic) BOOL isUserSubstitution;
@property (nonatomic, copy) NSSet *languages;
@property (nonatomic, copy) NSString *originalString;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } replacementRange;
@property (nonatomic, copy) NSString *replacementString;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, copy) NSSet *voiceIds;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)active;
- (BOOL)appliesToAllApps;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)ignoreCase;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReplacementTextAllPunctuation;
- (BOOL)isReplacementTextSurroundedByPunctuation;
- (BOOL)isUserSubstitution;
- (id)languages;
- (id)originalString;
- (id)phonemes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })replacementRange;
- (id)replacementString;
- (void)setActive:(BOOL)arg1;
- (void)setAppliesToAllApps:(BOOL)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setIgnoreCase:(BOOL)arg1;
- (void)setIsUserSubstitution:(BOOL)arg1;
- (void)setLanguages:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setPhonemes:(id)arg1;
- (void)setReplacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setReplacementString:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVoiceIds:(id)arg1;
- (id)uuid;
- (id)voiceIds;

@end