
// Code generated by stanc v2.30.1
#include <stan/model/model_header.hpp>
namespace simpleLR_ppc_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 28> locations_array__ = 
{" (found before start of program)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 13, column 4 to column 11)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 14, column 4 to column 11)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 15, column 4 to column 24)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 19, column 4 to column 25)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 21, column 8 to column 31)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 20, column 19 to line 22, column 5)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 20, column 4 to line 22, column 5)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 33, column 4 to column 34)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 34, column 4 to column 29)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 36, column 8 to column 39)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 38, column 8 to column 52)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 35, column 23 to line 39, column 5)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 35, column 4 to line 39, column 5)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 28, column 8 to column 40)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 27, column 19 to line 29, column 5)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 27, column 4 to line 29, column 5)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 3, column 4 to column 19)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 4, column 10 to column 11)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 4, column 4 to column 40)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 5, column 10 to column 11)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 5, column 4 to column 43)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 8, column 4 to column 23)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 9, column 10 to column 15)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 9, column 4 to column 28)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 19, column 10 to column 11)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 33, column 11 to column 16)",
 " (in '/Users/yyamaguchi/Desktop/programming/BayesianStatistics/src/01_simpleLinearReg/simpleLR_ppc.stan', line 34, column 11 to column 16)"};




class simpleLR_ppc_model final : public model_base_crtp<simpleLR_ppc_model> {

 private:
  int N;
  std::vector<double> X;
  std::vector<double> Y;
  int N_new;
  std::vector<double> X_new; 
  
 
 public:
  ~simpleLR_ppc_model() { }
  
  inline std::string model_name() const final { return "simpleLR_ppc_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.30.1", "stancflags = "};
  }
  
  
  simpleLR_ppc_model(stan::io::var_context& context__,
                     unsigned int random_seed__ = 0,
                     std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "simpleLR_ppc_model_namespace::simpleLR_ppc_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 17;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 17;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 17;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 18;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 19;
      context__.validate_dims("data initialization","X","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      X = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 19;
      X = context__.vals_r("X");
      current_statement__ = 19;
      stan::math::check_greater_or_equal(function__, "X", X, 18);
      current_statement__ = 19;
      stan::math::check_less_or_equal(function__, "X", X, 70);
      current_statement__ = 20;
      stan::math::validate_non_negative_index("Y", "N", N);
      current_statement__ = 21;
      context__.validate_dims("data initialization","Y","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      Y = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 21;
      Y = context__.vals_r("Y");
      current_statement__ = 21;
      stan::math::check_greater_or_equal(function__, "Y", Y, 100);
      current_statement__ = 21;
      stan::math::check_less_or_equal(function__, "Y", Y, 5000);
      current_statement__ = 22;
      context__.validate_dims("data initialization","N_new","int",
           std::vector<size_t>{});
      N_new = std::numeric_limits<int>::min();
      
      
      current_statement__ = 22;
      N_new = context__.vals_i("N_new")[(1 - 1)];
      current_statement__ = 22;
      stan::math::check_greater_or_equal(function__, "N_new", N_new, 0);
      current_statement__ = 23;
      stan::math::validate_non_negative_index("X_new", "N_new", N_new);
      current_statement__ = 24;
      context__.validate_dims("data initialization","X_new","double",
           std::vector<size_t>{static_cast<size_t>(N_new)});
      X_new = 
        std::vector<double>(N_new, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 24;
      X_new = context__.vals_r("X_new");
      current_statement__ = 25;
      stan::math::validate_non_negative_index("y_base", "N", N);
      current_statement__ = 26;
      stan::math::validate_non_negative_index("y_base_new", "N_new", N_new);
      current_statement__ = 27;
      stan::math::validate_non_negative_index("y_new", "N_new", N_new);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "simpleLR_ppc_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ a = DUMMY_VAR__;
      current_statement__ = 1;
      a = in__.template read<local_scalar_t__>();
      local_scalar_t__ b = DUMMY_VAR__;
      current_statement__ = 2;
      b = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      std::vector<local_scalar_t__> y_base =
         std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      current_statement__ = 7;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 5;
        stan::model::assign(y_base,
          (a + (b * stan::model::rvalue(X, "X", stan::model::index_uni(n)))),
          "assigning variable y_base", stan::model::index_uni(n));
      }
      {
        current_statement__ = 16;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 14;
          lp_accum__.add(
            stan::math::normal_lpdf<propto__>(
              stan::model::rvalue(Y, "Y", stan::model::index_uni(n)),
              stan::model::rvalue(y_base, "y_base",
                stan::model::index_uni(n)), sigma));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "simpleLR_ppc_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double a = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      a = in__.template read<local_scalar_t__>();
      double b = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      b = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      std::vector<double> y_base =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      out__.write(a);
      out__.write(b);
      out__.write(sigma);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 7;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 5;
        stan::model::assign(y_base,
          (a + (b * stan::model::rvalue(X, "X", stan::model::index_uni(n)))),
          "assigning variable y_base", stan::model::index_uni(n));
      }
      if (emit_transformed_parameters__) {
        out__.write(y_base);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> y_base_new =
         std::vector<double>(N_new, std::numeric_limits<double>::quiet_NaN());
      std::vector<double> y_new =
         std::vector<double>(N_new, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 13;
      for (int n = 1; n <= N_new; ++n) {
        current_statement__ = 10;
        stan::model::assign(y_base_new,
          (a +
            (b *
              stan::model::rvalue(X_new, "X_new", stan::model::index_uni(n)))),
          "assigning variable y_base_new", stan::model::index_uni(n));
        current_statement__ = 11;
        stan::model::assign(y_new,
          stan::math::normal_rng(
            stan::model::rvalue(y_base_new, "y_base_new",
              stan::model::index_uni(n)), sigma, base_rng__),
          "assigning variable y_new", stan::model::index_uni(n));
      }
      out__.write(y_base_new);
      out__.write(y_new);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ a = DUMMY_VAR__;
      a = in__.read<local_scalar_t__>();
      out__.write(a);
      local_scalar_t__ b = DUMMY_VAR__;
      b = in__.read<local_scalar_t__>();
      out__.write(b);
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"a", "b", "sigma", "y_base",
      "y_base_new", "y_new"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N_new)},
      std::vector<size_t>{static_cast<size_t>(N_new)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "a");
    param_names__.emplace_back(std::string() + "b");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_base" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N_new; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_base_new" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N_new; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_new" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "a");
    param_names__.emplace_back(std::string() + "b");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_base" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N_new; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_base_new" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N_new; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_new" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_base\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y_base_new\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_new) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"y_new\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_new) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"a\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"b\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_base\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"y_base_new\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_new) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"y_new\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N_new) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = emit_transformed_parameters * N;
      const size_t num_gen_quantities = emit_generated_quantities * 
  (N_new + N_new);
      const size_t num_to_write = num_params__ + num_transformed +
        num_gen_quantities;
      std::vector<int> params_i;
      vars = Eigen::Matrix<double, Eigen::Dynamic, 1>::Constant(num_to_write,
        std::numeric_limits<double>::quiet_NaN());
      write_array_impl(base_rng, params_r, params_i, vars,
        emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = emit_transformed_parameters * N;
      const size_t num_gen_quantities = emit_generated_quantities * 
  (N_new + N_new);
      const size_t num_to_write = num_params__ + num_transformed +
        num_gen_quantities;
      vars = std::vector<double>(num_to_write,
        std::numeric_limits<double>::quiet_NaN());
      write_array_impl(base_rng, params_r, params_i, vars,
        emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 3> names__{"a", "b", "sigma"};
      const std::array<Eigen::Index, 3> constrain_param_sizes__{1, 1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = simpleLR_ppc_model_namespace::simpleLR_ppc_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return simpleLR_ppc_model_namespace::profiles__;
}

#endif


