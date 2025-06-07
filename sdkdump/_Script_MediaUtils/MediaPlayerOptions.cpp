#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaPlayerOptions.hpp"
void* _Script_MediaUtils::MediaPlayerOptions::get_Tracks() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MediaUtils::MediaPlayerOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaUtils.MediaPlayerOptions");
    return result;
}
