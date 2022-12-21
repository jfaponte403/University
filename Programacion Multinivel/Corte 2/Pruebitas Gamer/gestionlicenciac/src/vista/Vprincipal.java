package vista;

public class Vprincipal extends javax.swing.JFrame {

    public Vprincipal() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        mnu_salir = new javax.swing.JCheckBoxMenuItem();
        jMenu2 = new javax.swing.JMenu();
        mnu_gconductores = new javax.swing.JCheckBoxMenuItem();
        jMenu3 = new javax.swing.JMenu();
        mmu_activas = new javax.swing.JCheckBoxMenuItem();
        mmu_vencidas = new javax.swing.JRadioButtonMenuItem();
        mmu_pvencer = new javax.swing.JRadioButtonMenuItem();

        setBackground(new java.awt.Color(102, 0, 153));

        jPanel1.setBackground(new java.awt.Color(0, 0, 0));
        jPanel1.setForeground(new java.awt.Color(51, 0, 204));

        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Imagenes/licencia.png"))); // NOI18N
        jPanel2.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 640, 430));

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(53, 53, 53)
                .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(45, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap(25, Short.MAX_VALUE)
                .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(30, 30, 30))
        );

        jMenu1.setText("File");

        mnu_salir.setFont(new java.awt.Font("Comic Sans MS", 0, 12)); // NOI18N
        mnu_salir.setSelected(true);
        mnu_salir.setText("Salir");
        mnu_salir.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mnu_salirActionPerformed(evt);
            }
        });
        jMenu1.add(mnu_salir);

        jMenuBar1.add(jMenu1);

        jMenu2.setText("Licencias");

        mnu_gconductores.setSelected(true);
        mnu_gconductores.setText("Gestion de conductores");
        mnu_gconductores.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mnu_gconductoresActionPerformed(evt);
            }
        });
        jMenu2.add(mnu_gconductores);

        jMenuBar1.add(jMenu2);

        jMenu3.setText("Reportes");

        mmu_activas.setSelected(true);
        mmu_activas.setText("Licencias activas");
        mmu_activas.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mmu_activasActionPerformed(evt);
            }
        });
        jMenu3.add(mmu_activas);

        mmu_vencidas.setSelected(true);
        mmu_vencidas.setText("Licencias vencidas");
        mmu_vencidas.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mmu_vencidasActionPerformed(evt);
            }
        });
        jMenu3.add(mmu_vencidas);

        mmu_pvencer.setSelected(true);
        mmu_pvencer.setText("Licencias proximas a vencer");
        mmu_pvencer.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mmu_pvencerActionPerformed(evt);
            }
        });
        jMenu3.add(mmu_pvencer);

        jMenuBar1.add(jMenu3);

        setJMenuBar(jMenuBar1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void mnu_salirActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mnu_salirActionPerformed

        System.exit(0);
        
    }//GEN-LAST:event_mnu_salirActionPerformed

    private void mnu_gconductoresActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mnu_gconductoresActionPerformed

        new VistaGetconductores().setVisible(true);
        
    }//GEN-LAST:event_mnu_gconductoresActionPerformed

    private void mmu_activasActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mmu_activasActionPerformed

        new Ractivas().setVisible(true); //AQUI ESTO ES PARA QUE CUANDO LE DE AL BOTON LLAME A LA TABLA DE LVENCIDAS.

    }//GEN-LAST:event_mmu_activasActionPerformed

    private void mmu_vencidasActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mmu_vencidasActionPerformed
        new Rvencidas().setVisible(true); ////AQUI ES PARA QUE CUANDO LE DE CLICK AL BOTON MUESTRE LA TABLA
    }//GEN-LAST:event_mmu_vencidasActionPerformed

    private void mmu_pvencerActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mmu_pvencerActionPerformed
        new Rproximasavencer().setVisible(true);////AQUI ES PARA QUE CUANDO LE DE CLICK AL BOTON MUESTRE LA TABLA
    }//GEN-LAST:event_mmu_pvencerActionPerformed


    public static void main(String args[]) {

        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Vprincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Vprincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Vprincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Vprincipal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
  
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Vprincipal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel jLabel1;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    public javax.swing.JMenu jMenu3;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    public javax.swing.JCheckBoxMenuItem mmu_activas;
    private javax.swing.JRadioButtonMenuItem mmu_pvencer;
    public javax.swing.JRadioButtonMenuItem mmu_vencidas;
    public javax.swing.JCheckBoxMenuItem mnu_gconductores;
    public javax.swing.JCheckBoxMenuItem mnu_salir;
    // End of variables declaration//GEN-END:variables
}
