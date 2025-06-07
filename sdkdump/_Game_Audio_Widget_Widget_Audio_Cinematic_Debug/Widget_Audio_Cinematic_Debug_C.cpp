#include "..\FUObjectArray.hpp"
#include "Widget_Audio_Cinematic_Debug_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_LevelSequence\LevelSequencePlayer.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_PlaybackPos() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_ShouldFollowPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::set_ShouldFollowPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SlateCore::SlateColor _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::Get_TextBlock_0_ColorAndOpacity_0() {
    return;
}
_Script_UMG::TextBlock*& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_FPS_Number() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x210);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_MotionParam() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_UMG::TextBlock*& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_TextBlock_0() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x218);
}
_Script_UMG::TextBlock*& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_TextBlock_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x220);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Color() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_AiDef() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_RsGameTechRT::RsAICharacter*& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_SpawnedAI() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x238);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_SelectedItem() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_FPS_Text() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_FrameCounter() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
bool _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_IsCinematicActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 1 != 0;
}
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::set_IsCinematicActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Time() {
    return *(float*)((uintptr_t)this + 0x280);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Cin_Name() {
    return (void*)((uintptr_t)this + 0x288);
}
int32_t& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_FrameNumber() {
    return *(int32_t*)((uintptr_t)this + 0x2a0);
}
int32_t& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_CinematicCounter() {
    return *(int32_t*)((uintptr_t)this + 0x2a4);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Resolutions() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Currrent_FPS() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Bad() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_Good() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_LevelSequence::LevelSequencePlayer*& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_CurrentSeqeunce() {
    return *(_Script_LevelSequence::LevelSequencePlayer**)((uintptr_t)this + 0x348);
}
float& _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_JumpToPlayback() {
    return *(float*)((uintptr_t)this + 0x350);
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::get_CurrentCamLocation() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_CoreUObject::Class* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Audio/Widget/Widget_Audio_Cinematic_Debug.Widget_Audio_Cinematic_Debug_C");
    return result;
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::Get_TextBlock_0_Text_0() {
    return;
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::GetText_0() {
    return;
}
void* _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::FPS() {
    return;
}
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::Construct0() {
    return;
}
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::End() {
    return;
}
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::Start() {
    return;
}
void _Game_Audio_Widget_Widget_Audio_Cinematic_Debug::Widget_Audio_Cinematic_Debug_C::ExecuteUbergraph_Widget_Audio_Cinematic_Debug(int32_t EntryPoint) {
    return;
}
