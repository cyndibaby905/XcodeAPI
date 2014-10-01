

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkSystemTask-Protocol.h>
#import <IDEFoundation/IDELocalizationWorkWriteData-Protocol.h>

@class DVTFilePath, NSArray, NSData, NSNumber, NSURL;

@interface _IDELocalizationExporterConfig : IDELocalizationWorkContext <IDELocalizationWorkSystemTask, IDELocalizationWorkWriteData>
{
    NSURL *IDELocalizationWork_url;
    NSData *IDELocalizationWork_data;
    DVTFilePath *IDELocalizationWork_launchPath;
    NSArray *IDELocalizationWork_arguments;
    NSNumber *IDELocalizationWork_exitStatus;
}

@property(retain) NSNumber *IDELocalizationWork_exitStatus; // @synthesize IDELocalizationWork_exitStatus;
@property(retain) NSArray *IDELocalizationWork_arguments; // @synthesize IDELocalizationWork_arguments;
@property(retain) DVTFilePath *IDELocalizationWork_launchPath; // @synthesize IDELocalizationWork_launchPath;
@property(retain) NSData *IDELocalizationWork_data; // @synthesize IDELocalizationWork_data;
@property(retain) NSURL *IDELocalizationWork_url; // @synthesize IDELocalizationWork_url;

@end

