#include "..\FUObjectArray.hpp"
#include "BinkFunctionLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
void _Script_BinkMediaPlayer::BinkFunctionLibrary::Bink_DrawOverlays() {
    return;
}
_Script_CoreUObject::Class* _Script_BinkMediaPlayer::BinkFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/BinkMediaPlayer.BinkFunctionLibrary");
    return result;
}
_Script_CoreUObject::Timespan _Script_BinkMediaPlayer::BinkFunctionLibrary::BinkLoadingMovie_GetTime() {
    return;
}
_Script_CoreUObject::Timespan _Script_BinkMediaPlayer::BinkFunctionLibrary::BinkLoadingMovie_GetDuration() {
    return;
}
