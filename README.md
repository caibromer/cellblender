CellBlender 1.0.1
===============================================================================

Introduction:
-------------------------------------------------------------------------------

CellBlender development is supported by the NIGMS-funded (P41GM103712) National
Center for Multiscale Modeling of Biological Systems (MMBioS).

CellBlender is an addon for Blender (2.6x-2.7x) to create computational cell
biology models for use in MCell and potentially other cell simulation
biophysics engines. In CellBlender 1.0.1 you can define molecules and
reactions, create geometric objects, define named surface regions on the
objects, assign properties to those regions, run an MCell simulation based off
of the CellBlender project, create plots of said simulation, visualize an
animation of the molecule trajectories, and render the results. MDL import
currently only supports mesh data, but full support will be added in future
versions of CellBlender.

One goal for CellBlender is to provide a comprehensive model building and
visualization environment which completely encapsulates all of MCell's MDL
language in GUI form such that the user need not ever edit an MDL file by hand
(or even know that such files exist). CellBlender is already nearly feature
complete with respect to MCell, but there may still be a few minor ones missing
for now.

Installing CellBlender Addon:
-------------------------------------------------------------------------------

Startup Blender and go to the **File->User Preferences** menu. In the **User
Preferences** control panel choose the **Addons** tab. Click the **Install from
File** button at the bottom of the window. Navigate to the unextracted zip file
that you downloaded (cellblender_v1.0.1.zip), select it, and click the
**Install from File** button near the upper-right hand corner.

Activating CellBlender Addon in Blender:
-------------------------------------------------------------------------------

In the **Addons** panel scroll down till you see **Cell Modeling: CellBlender**
and check the check box to enable it. Then click **Save as Default** to enable
the addon permanently in Blender for any future projects you make.

Using CellBlender:
-------------------------------------------------------------------------------

For detailed instructions with images, please see http://mcell.org/tutorials/.
If you have any questions about CellBlender, feel free to ask us at
http://mmbios.org/index.php/mcell-cellblender-forum/.

Additional notes:
-------------------------------------------------------------------------------

If you are hand-editing MDLs, note that **CELLBLENDER** mode **VIZ_OUTPUT**
will output molecules but will not output meshes. We assume that your meshes
are already present in your CellBlender/Blender project. The philosophy here is
that the CellBlender/Blender project IS your MCell project and that the MCell
compute kernel is a physics engine driving the dynamics of objects created and
visualized in Blender.

Depending on your graphics hardware beware, of exporting more than 10000
molecules or so, if you want good performance (>10 frames per second) in
CellBlender playback. But if your goal is to render a movie you should be able
to export and render many 100s of thousands of molecules per frame with
CellBlender. 
