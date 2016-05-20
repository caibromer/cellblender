/* File : libMCell.h */

#include <iostream>
#include <string>
#include <vector>
#include "StorageClasses.h"

using namespace std;

class MCellMoleculeInstance; // Forward declaration needed

class MCellMoleculeSpecies {
 public:
  string name;
  // char * new_name;
  string type;
  char type_code;
  double diffusion_constant;

  //vector<MCellMoleculeInstance *> instance_list;
  MCellMoleculeInstance *instance_list;
  int num_instances;

  MCellMoleculeSpecies() {
    name = "X";
    type = 'v';
    type_code = 0;
    diffusion_constant = 0.0;
    instance_list = NULL;
    num_instances = 0;
  }

};

class MCellMoleculeInstance {
 public:
  MCellMoleculeSpecies *molecule_species;
  double x, y, z;
  MCellMoleculeInstance *next;
};

class MCellReleaseSite {
 public:
  MCellMoleculeSpecies *molecule_species;
  double x, y, z;
  double quantity;
  MCellReleaseSite *next;
};


class MCellSimulation {
 private:
  char *join_path ( char *p1, char sep, char *p2 );
  //void pick_displacement( MCellMoleculeInstance *mol, double scale /*, struct rng_state *rng */ );
 public:
  static int num_simulations;

  int num_iterations;
  double time_step;

  MapStore<MCellMoleculeSpecies *> molecule_species;
  ArrayStore<MCellReleaseSite *> molecule_release_sites;

  MCellSimulation() {
    num_simulations++;
    num_iterations = 0;
    time_step = 0.0;
  }
  virtual ~MCellSimulation() {
    num_simulations--;
  }
  
  void add_molecule_species ( MCellMoleculeSpecies *species );
  void add_molecule_release_site ( MCellReleaseSite *site );
  MCellMoleculeSpecies *get_molecule_species_by_name ( char *mol_name );
  void run_simulation ( char *proj_path );
};

