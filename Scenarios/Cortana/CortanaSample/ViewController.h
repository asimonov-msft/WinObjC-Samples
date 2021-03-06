//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

//////////////////////////////////////
// WinObjC Sample - Cortana //////////
// github.com/Microsoft/WinObjC //////
//////////////////////////////////////

#import <UIKit/UIKit.h>

#ifdef WINOBJC
#import <UWP/WindowsApplicationModelVoiceCommands.h>
#endif

@interface ViewController : UIViewController

- (void)voiceCommand: (NSString*)text;
- (void)textSpoken: (NSString*)text;
- (void)semanticInterpretation: (NSString*)text;
- (void)launchedBy: (NSString*)text;

#ifdef WINOBJC
- (void)setSpeechRecognitionLabelsWithSpeechRecognitionResult: (WMSSpeechRecognitionResult*)result;
#endif

@end
