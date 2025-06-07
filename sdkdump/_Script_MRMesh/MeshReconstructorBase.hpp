#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
struct MRMeshComponent;
}
namespace _Script_MRMesh {
#pragma pack(push, 1)
struct MeshReconstructorBase : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(_Script_MRMesh::MRMeshComponent* Mesh);
}; // Size: 0x28
#pragma pack(pop)
}
