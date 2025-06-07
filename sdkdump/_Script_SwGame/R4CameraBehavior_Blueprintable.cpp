#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
#include "R4CameraBehavior_Blueprintable.hpp"
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_Blueprintable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_Blueprintable");
    return result;
}
void _Script_SwGame::R4CameraBehavior_Blueprintable::Update(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
void _Script_SwGame::R4CameraBehavior_Blueprintable::End(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
void _Script_SwGame::R4CameraBehavior_Blueprintable::Begin(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
