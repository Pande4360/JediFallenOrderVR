#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_LevelSequence {
struct LevelSequencePlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Widget_Widget_Audio_Cinematic_Debug {
#pragma pack(push, 1)
struct Widget_Audio_Cinematic_Debug_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x180]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_FPS_Number();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    void* get_AiDef();
    _Script_RsGameTechRT::RsAICharacter*& get_SpawnedAI();
    bool get_ShouldFollowPlayer();
    void set_ShouldFollowPlayer(bool value);
    void* get_MotionParam();
    void* get_SelectedItem();
    void* get_FPS_Text();
    int32_t& get_FrameCounter();
    bool get_IsCinematicActive();
    void set_IsCinematicActive(bool value);
    float& get_Time();
    void* get_Cin_Name();
    int32_t& get_FrameNumber();
    int32_t& get_CinematicCounter();
    void* get_Resolutions();
    void* get_Currrent_FPS();
    void* get_Color();
    void* get_Bad();
    void* get_Good();
    _Script_LevelSequence::LevelSequencePlayer*& get_CurrentSeqeunce();
    float& get_JumpToPlayback();
    void* get_CurrentCamLocation();
    void* get_PlaybackPos();
    static _Script_CoreUObject::Class* static_class();
    _Script_SlateCore::SlateColor Get_TextBlock_0_ColorAndOpacity_0();
    void* Get_TextBlock_0_Text_0();
    void* GetText_0();
    void* FPS();
    void Construct0();
    void End();
    void Start();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_Audio_Cinematic_Debug(int32_t EntryPoint);
}; // Size: 0x388
#pragma pack(pop)
}
