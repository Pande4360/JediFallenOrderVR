#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "TimecodeProvider.hpp"
_Script_CoreUObject::Class* _Script_Engine::TimecodeProvider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TimecodeProvider");
    return result;
}
_Script_CoreUObject::Timecode _Script_Engine::TimecodeProvider::GetTimecode() {
    return;
}
void* _Script_Engine::TimecodeProvider::GetSynchronizationState() {
    return;
}
_Script_CoreUObject::FrameRate _Script_Engine::TimecodeProvider::GetFrameRate() {
    return;
}
