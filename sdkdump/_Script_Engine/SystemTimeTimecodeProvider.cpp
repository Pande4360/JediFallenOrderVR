#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "SystemTimeTimecodeProvider.hpp"
#include "TimecodeProvider.hpp"
void* _Script_Engine::SystemTimeTimecodeProvider::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::SystemTimeTimecodeProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SystemTimeTimecodeProvider");
    return result;
}
void _Script_Engine::SystemTimeTimecodeProvider::SetFrameRate(_Script_CoreUObject::FrameRate& InFrameRate) {
    return;
}
