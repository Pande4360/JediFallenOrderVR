#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompressedTrack.hpp"
_Script_CoreUObject::Class* _Script_Engine::CompressedTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CompressedTrack");
    return result;
}
void* _Script_Engine::CompressedTrack::get_ByteStream() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CompressedTrack::get_Times() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::CompressedTrack::get_Mins() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::CompressedTrack::get_Ranges() {
    return *(float*)((uintptr_t)this + 0x2c);
}
