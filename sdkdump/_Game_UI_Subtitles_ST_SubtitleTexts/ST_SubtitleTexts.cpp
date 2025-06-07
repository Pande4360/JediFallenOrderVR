#include "..\FUObjectArray.hpp"
#include "ST_SubtitleTexts.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Game_UI_Subtitles_ST_SubtitleTexts::ST_SubtitleTexts::get_UID_7_78660E364F64826C56CDC9984F4D2B74() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Game_UI_Subtitles_ST_SubtitleTexts::ST_SubtitleTexts::get_Speaker_2_BDB00BB44EBF573CA18C52901BE2C39E() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_UI_Subtitles_ST_SubtitleTexts::ST_SubtitleTexts::get_Content_4_58CE9AE846C59C567E2657BDC9FD91E2() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Game_UI_Subtitles_ST_SubtitleTexts::ST_SubtitleTexts::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/Subtitles/ST_SubtitleTexts.ST_SubtitleTexts");
    return result;
}
