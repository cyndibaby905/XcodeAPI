

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkWriteData-Protocol.h>

@class NSData, NSURL;

@interface _IDELocalizationWriteStringsContext : IDELocalizationWorkContext <IDELocalizationWorkWriteData>
{
    NSURL *IDELocalizationWork_url;
    NSData *IDELocalizationWork_data;
}

@property(retain) NSData *IDELocalizationWork_data; // @synthesize IDELocalizationWork_data;
@property(retain) NSURL *IDELocalizationWork_url; // @synthesize IDELocalizationWork_url;

@end

