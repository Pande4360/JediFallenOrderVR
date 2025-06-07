#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_RemoveTrivialKeys.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_RemoveTrivialKeys::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_RemoveTrivialKeys");
    return result;
}
float& _Script_Engine::AnimCompress_RemoveTrivialKeys::get_MaxPosDiff() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::AnimCompress_RemoveTrivialKeys::get_MaxAngleDiff() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::AnimCompress_RemoveTrivialKeys::get_MaxScaleDiff() {
    return *(float*)((uintptr_t)this + 0x58);
}
