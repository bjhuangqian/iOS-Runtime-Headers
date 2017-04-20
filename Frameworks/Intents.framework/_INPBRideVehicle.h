/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideVehicle : PBCodable <NSCopying> {
    GEOLocation * _location;
    NSString * _manufacturer;
    _INPBImageValue * _mapAnnotationImage;
    NSString * _model;
    NSString * _registrationPlate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic, readonly) BOOL hasManufacturer;
@property (nonatomic, readonly) BOOL hasMapAnnotationImage;
@property (nonatomic, readonly) BOOL hasModel;
@property (nonatomic, readonly) BOOL hasRegistrationPlate;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) _INPBImageValue *mapAnnotationImage;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *registrationPlate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLocation;
- (BOOL)hasManufacturer;
- (BOOL)hasMapAnnotationImage;
- (BOOL)hasModel;
- (BOOL)hasRegistrationPlate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (id)manufacturer;
- (id)mapAnnotationImage;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (BOOL)readFrom:(id)arg1;
- (id)registrationPlate;
- (void)setLocation:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setMapAnnotationImage:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRegistrationPlate:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end