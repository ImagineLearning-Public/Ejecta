#import <UIKit/UIKit.h>


@protocol EJAudioSource

- (id)initWithPath:(NSString *)path;
- (void)load;
- (void)play;
- (void)pause;
- (void)setLooping:(BOOL)loop;
- (void)setVolume:(float)volume;
- (float)getCurrentTime;
- (void)setCurrentTime:(float)time;
- (float)getDuration;

@end
